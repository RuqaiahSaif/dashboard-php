<select name = 'category'>
                <?php
                $result=mysqli_query($con, "select * from category ");
 while($cate = mysqli_fetch_array($result)) {
	 if($cate['category_id']==$row['category_id']){
		 
     ?> 
<option value = '<?=$row['category_id']?>' selected><?=$row['category_name']?></option>
<?php
	 }
	 else{?>
				<option value = '<?=$row['category_id']?>'><?=$row['category_name']?></option>
			<?php
 
} }?>	
			</select>